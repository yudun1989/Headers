//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPModuleManager-Protocol.h"

@class NSString;
@protocol AMPAttributedStringHandler, AMPDBOperator, AMPDataCache, AMPNotifyBiz;

@interface TBAMPModuleManager : NSObject <AMPModuleManager>
{
    id <AMPDataCache> _dataCache;
    id <AMPDBOperator> _dbOperator;
    id <AMPNotifyBiz> _notifyBiz;
    id <AMPAttributedStringHandler> _attributedStringHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <AMPAttributedStringHandler> attributedStringHandler; // @synthesize attributedStringHandler=_attributedStringHandler;
@property(retain, nonatomic) id <AMPNotifyBiz> notifyBiz; // @synthesize notifyBiz=_notifyBiz;
@property(retain, nonatomic) id <AMPDBOperator> dbOperator; // @synthesize dbOperator=_dbOperator;
@property(retain, nonatomic) id <AMPDataCache> dataCache; // @synthesize dataCache=_dataCache;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

