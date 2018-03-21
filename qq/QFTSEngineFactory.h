//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IFTSEngineFactory-Protocol.h>

@class NSString;

@interface QFTSEngineFactory : NSObject <IFTSEngineFactory>
{
}

- (id)getFTSFunctionEngineForJsAPI;
- (id)getFTSFileEngineForJsAPI;
- (id)getFTSFavoriteEngineForJsAPI;
- (id)getFTSMsgEngineForJsAPI;
- (id)getFTSCreateDiscussGroupEngineForJsAPI;
- (id)getFTSRelationEngineForJsAPI;
- (id)getFTSFunctionEngine;
- (id)getFTSFileEngine;
- (id)getFTSFavoriteEngine;
- (id)getFTSMsgEngine;
- (id)getFTSCreateDiscussGroupEngine;
- (id)getFTSRelationEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

