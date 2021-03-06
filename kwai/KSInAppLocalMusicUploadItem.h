//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSMusicUploadItem-Protocol.h"

@class AVURLAsset, KSULocalMusicPackage, NSMutableDictionary, NSProgress, NSString, UIImage;

@interface KSInAppLocalMusicUploadItem : NSObject <KSMusicUploadItem>
{
    KSULocalMusicPackage *_localMusicPackage;
    NSString *_musicName;
    NSProgress *_progress;
    UIImage *_coverImage;
    NSString *_lyric;
    unsigned long long _type;
    AVURLAsset *_mediaAsset;
    NSString *_userName;
    NSMutableDictionary *_assetMetaDic;
}

@property(retain, nonatomic) NSMutableDictionary *assetMetaDic; // @synthesize assetMetaDic=_assetMetaDic;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) AVURLAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *preferredFileExtension;
- (id)taskForPreparingMusicFileAtOutputURL:(id)arg1 cancellationToken:(id)arg2;
@property(readonly, nonatomic) KSULocalMusicPackage *localMusicPackage; // @synthesize localMusicPackage=_localMusicPackage;
@property(readonly, nonatomic) NSString *artistName;
- (id)initWithMediaAsset:(id)arg1 userName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

