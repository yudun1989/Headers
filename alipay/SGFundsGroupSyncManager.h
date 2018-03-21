//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage;
@protocol SGFundGroupChangeSyncProxy;

@interface SGFundsGroupSyncManager : NSObject
{
    id <SGFundGroupChangeSyncProxy> _fundsChangeSyncProxy;
    APCustomStorage *_storage;
}

+ (id)sharedInstance;
@property(retain) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)deleteFundsChangeSyncWithGroupId:(id)arg1;
- (id)getFundChangeSyncModelWithGroupId:(id)arg1;
- (void)handleSpecificGroupService:(id)arg1;
- (void)realRegisterSyncService;
- (id)init;

@end

