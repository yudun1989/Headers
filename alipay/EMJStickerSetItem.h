//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EMJStickerSetItem : NSObject
{
    NSArray *_stickerItems;
    NSString *_packageId;
    NSString *_stickerSetId;
    NSString *_stickerSetName;
    NSString *_iconFid;
    NSString *_packageFid;
}

+ (id)allocWithPackage:(id)arg1;
+ (void)exportGifWithSticker:(id)arg1 toPath:(id)arg2 thumbPath:(id)arg3;
@property(retain, nonatomic) NSArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property(retain, nonatomic) NSString *packageFid; // @synthesize packageFid=_packageFid;
@property(retain, nonatomic) NSString *iconFid; // @synthesize iconFid=_iconFid;
@property(retain, nonatomic) NSString *stickerSetName; // @synthesize stickerSetName=_stickerSetName;
@property(retain, nonatomic) NSString *stickerSetId; // @synthesize stickerSetId=_stickerSetId;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *templateFolderPath;
- (id)templatePackageSubPath:(id)arg1;
- (id)infoJSONPath;
@property(readonly, nonatomic) _Bool isTemplateDownloaded;
- (_Bool)readTemplateDirectory;
- (_Bool)hasStickerItems;
- (void)emotion_buildPackageToDir;
- (void)_removeAllFilesFromDir:(id)arg1;
- (_Bool)emotion_isAlreadyCopiedToPackageDir;
- (id)emotion_packageId;
- (id)emotion_downloadMarkFile;

@end

