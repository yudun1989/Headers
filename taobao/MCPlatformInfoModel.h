//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseModel.h"

#import "MCGCDTimerDelegate-Protocol.h"
#import "MCOfficialDataSourceDelegate-Protocol.h"
#import "MCPlatformInfoModelProtocol-Protocol.h"

@class MCGCDTimer, NSString;
@protocol MCOfficialDataSourceProtocol, MCPlatformInfoDataSourceProtocol, MCPlatformInfoModelDelegate;

@interface MCPlatformInfoModel : MCBaseModel <MCOfficialDataSourceDelegate, MCGCDTimerDelegate, MCPlatformInfoModelProtocol>
{
    id <MCOfficialDataSourceProtocol> _officialDataSource;
    id <MCPlatformInfoDataSourceProtocol> _platformDataSource;
    id <MCPlatformInfoModelDelegate> _delegate;
    MCGCDTimer *_gcdTimer;
}

@property(retain, nonatomic) MCGCDTimer *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(nonatomic) __weak id <MCPlatformInfoModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MCPlatformInfoDataSourceProtocol> platformDataSource; // @synthesize platformDataSource=_platformDataSource;
@property(nonatomic) __weak id <MCOfficialDataSourceProtocol> officialDataSource; // @synthesize officialDataSource=_officialDataSource;
- (void).cxx_destruct;
- (void)timer:(id)arg1;
- (void)callbackDelegate;
- (void)officalAccountInfoUpdated:(id)arg1;
- (id)getPlatformInfo;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

