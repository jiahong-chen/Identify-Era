activate.bat tf&python retrain.py --bottleneck_dir=./tensorflow/bottlenecks --how_many_training_steps=250 --summaries_dir=./tensorflow/training_summaries/log --output_graph=./tensorflow/data/pb/Harper.pb --output_labels=./tensorflow/data/label/Harper.txt --architecture=log --image_dir=C:/Users/jiahong/Desktop/flower_photos