now=$(date "+%Y-%m-%d")
echo "Starting add-commit-push..."
git add . && git commit -m "$now" && git push
echo "Finish!"