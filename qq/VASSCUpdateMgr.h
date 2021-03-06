//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VASSCUpdateMgr : NSObject
{
    struct CDBCallBack _dbCallback;
    struct CBaseCallBack _baseCallback;
    struct IUpdateManager *_pUpdateManager;
}

+ (id)configPath;
+ (id)getInstance;
+ (_Bool)hasInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)downloadGatherItem:(unsigned long long)arg1 gatherScid:(id)arg2 arrayScid:(id)arg3 from:(id)arg4;
- (void)downloadItem:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)cancelDownload:(unsigned long long)arg1 scid:(id)arg2;
- (void)performAllItemUpdate;
- (void)updateAllItems;
- (void)unregirstItem:(unsigned long long)arg1 prefix:(id)arg2;
- (void)regirstItem:(unsigned long long)arg1 prefix:(id)arg2 listener:(id)arg3 business:(id)arg4;
- (void)setLocalInfo;
- (void)setSysHttpProxy;
- (void)preRegisteAlwaysUpdate;
- (void)dealloc;
- (id)init;

@end

