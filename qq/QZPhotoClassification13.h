//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZCoreMLModelBase.h>

@class QZPhotoTagDetect;

@interface QZPhotoClassification13 : QZCoreMLModelBase
{
    QZPhotoTagDetect *_tagDetectService;
}

+ (id)modelSaveDir;
+ (id)modelURL;
+ (id)babyTagIndexArray;
+ (id)tagCategories;
+ (id)tagTresholds;
+ (id)tagVersionForServer;
+ (id)bundleVersion;
- (void).cxx_destruct;
- (_Bool)doPhotoClassify:(id)arg1 tagResult:(id *)arg2 error:(id *)arg3;
- (_Bool)doOpenModel:(id *)arg1;
- (_Bool)doCheckModelLocalExist;
- (void)doCloseModel;
- (id)protoPath;
- (id)modelPath;

@end

