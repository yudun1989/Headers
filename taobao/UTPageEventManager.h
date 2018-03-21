//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString, UTPage;

@interface UTPageEventManager : NSObject <UTMCLifeCycleProtocol>
{
    NSString *_prePageKey;
    NSMutableDictionary *_pageItems;
    UTPage *_currentPage;
    UTPage *_prePage;
    NSMapTable *_pageObjects;
    NSMutableDictionary *_nextPageProperties;
    NSMutableDictionary *_privateNextPageProperties;
    NSMutableDictionary *_privatePageProperties;
    NSMutableDictionary *_linkRecords;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *linkRecords; // @synthesize linkRecords=_linkRecords;
@property(retain, nonatomic) NSMutableDictionary *privatePageProperties; // @synthesize privatePageProperties=_privatePageProperties;
@property(retain, nonatomic) NSMutableDictionary *privateNextPageProperties; // @synthesize privateNextPageProperties=_privateNextPageProperties;
@property(retain) NSMutableDictionary *nextPageProperties; // @synthesize nextPageProperties=_nextPageProperties;
@property(retain) NSMapTable *pageObjects; // @synthesize pageObjects=_pageObjects;
@property(retain) UTPage *prePage; // @synthesize prePage=_prePage;
@property(retain) UTPage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain) NSMutableDictionary *pageItems; // @synthesize pageItems=_pageItems;
@property(copy, nonatomic) NSString *prePageKey; // @synthesize prePageKey=_prePageKey;
- (void).cxx_destruct;
- (void)switchBackGround;
- (void)switchForeGround;
- (void)removePageObjectForKey:(id)arg1;
- (id)pageObjectForKey:(id)arg1;
- (void)addPageObject:(id)arg1 withPageKey:(id)arg2;
- (void)updatePrivatePageProperties:(id)arg1 forKey:(id)arg2;
- (void)removePrivatePagePropertiesForKey:(id)arg1;
- (id)privatePagePropertiesForKey:(id)arg1;
- (void)removePrivateNextPagePropertiesForKey:(id)arg1;
- (void)removePrivateNextPageProperties;
- (void)updatePrivateNextPageProperties:(id)arg1;
- (id)getRecordNextPagePropertiesWithKey:(id)arg1;
- (void)removeRecordNextPagePropertiesWithKey:(id)arg1;
- (void)recordNextPagePropertiesWithKey:(id)arg1;
- (void)coverNextPageProperties:(id)arg1;
- (id)getNextPageProperties;
- (void)updateNextPageProperties:(id)arg1;
- (_Bool)updateCurrentPageName:(id)arg1 forKey:(id)arg2;
- (_Bool)backToPrePage:(id)arg1;
- (id)ifH5currentPageKey;
- (id)currentPageKey;
- (id)currentPageName;
- (void)setCurrentPageName:(id)arg1 withKey:(id)arg2 ifH5:(id)arg3;
- (void)removePageItemForKey:(id)arg1;
- (id)pageItemForKey:(id)arg1;
- (void)addPageItem:(id)arg1 with:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

