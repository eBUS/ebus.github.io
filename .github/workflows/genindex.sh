#!/bin/bash
cd "$1" || exit 1
for file in `find . -maxdepth 1 -type f`; do
  t=`git log -m -r --name-only --no-color --pretty=raw -z -1 "$file"|grep -a committer|head -n 1|sed -e 's# +[0-9]*$##' -e 's#^.* ##'`
  if [[ $t -gt 1 ]]; then
    touch -d "@$t" -c -m "$file"
  fi
done
(ls *.csv; ls -d */ 2>/dev/null)|sort|tr -d "\r"|tr "\n" "#"|sed -e 's/#$//' -e 's/#/\\n/g' -e 's#^#"#' -e 's#$#"#' > index.json
