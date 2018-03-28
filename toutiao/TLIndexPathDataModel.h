//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface TLIndexPathDataModel : NSObject
{
    NSString *_identifierKeyPath;
    NSString *_sectionNameKeyPath;
    long long _sectionCount;
    NSMutableDictionary *_itemsByIdentifier;
    NSMutableDictionary *_identifiersByIndexPath;
    NSMutableDictionary *_indexPathsByIdentifier;
    NSArray *_items;
    NSArray *_sectionNames;
    NSArray *_sections;
    NSString *_title;
    CDUnknownBlockType _sectionNameBlock;
    CDUnknownBlockType _identifierBlock;
    NSMutableDictionary *_sectionInfosBySectionName;
}

+ (id)sectionNameForItem:(id)arg1 sectionNameBlock:(CDUnknownBlockType)arg2;
+ (id)identifierForItem:(id)arg1 identifierBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *sectionInfosBySectionName; // @synthesize sectionInfosBySectionName=_sectionInfosBySectionName;
@property(copy, nonatomic) CDUnknownBlockType identifierBlock; // @synthesize identifierBlock=_identifierBlock;
@property(copy, nonatomic) CDUnknownBlockType sectionNameBlock; // @synthesize sectionNameBlock=_sectionNameBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSArray *sectionNames; // @synthesize sectionNames=_sectionNames;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableDictionary *indexPathsByIdentifier; // @synthesize indexPathsByIdentifier=_indexPathsByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *identifiersByIndexPath; // @synthesize identifiersByIndexPath=_identifiersByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *itemsByIdentifier; // @synthesize itemsByIdentifier=_itemsByIdentifier;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_sectionCount;
@property(readonly, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=_sectionNameKeyPath;
@property(readonly, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (void).cxx_destruct;
- (id)keyForIndexPath:(id)arg1;
- (id)sectionNameForItem:(id)arg1;
- (id)currentVersionOfItem:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)identifierForItem:(id)arg1;
- (id)indexPathForIdentifier:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (id)identifierAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)sectionInfoForSection:(long long)arg1;
- (id)sectionTitleForSection:(long long)arg1;
- (long long)sectionForSectionName:(id)arg1;
- (id)sectionNameForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) NSArray *indexPaths;
- (id)initWithSectionInfos:(id)arg1 sectionNameBlock:(CDUnknownBlockType)arg2 identifierBlock:(CDUnknownBlockType)arg3;
- (id)initWithSectionInfos:(id)arg1 identifierKeyPath:(id)arg2;
- (id)initWithItems:(id)arg1 sectionNameBlock:(CDUnknownBlockType)arg2 identifierBlock:(CDUnknownBlockType)arg3;
- (id)initWithItems:(id)arg1 sectionNameKeyPath:(id)arg2 identifierKeyPath:(id)arg3;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

