//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSLocalAlbumWorkspace, NSArray;

@interface KSPostPicturesMakeResult : NSObject
{
    KSLocalAlbumWorkspace *_workspace;
    NSArray *_filteredImageAssets;
    NSArray *_tempAssets;
}

@property(readonly, nonatomic) NSArray *tempAssets; // @synthesize tempAssets=_tempAssets;
@property(readonly, nonatomic) NSArray *filteredImageAssets; // @synthesize filteredImageAssets=_filteredImageAssets;
@property(readonly, nonatomic) KSLocalAlbumWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)arg1 filteredImageAssets:(id)arg2 tempAssets:(id)arg3;

@end
