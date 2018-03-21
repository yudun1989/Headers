//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface TBHomeSectionPreparer : NSObject
{
    NSMutableDictionary *_updateGroupRefreshOnlySections;
    NSMutableDictionary *_mainSectionsDict;
    NSMutableDictionary *_mainSectionItemDict;
    NSMutableDictionary *_guessYouLikeSectionsDict;
    NSMutableDictionary *_guessYouLikeSectionItemDict;
    NSArray *_configedUpdateGroupRefreshOnlySections;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *configedUpdateGroupRefreshOnlySections; // @synthesize configedUpdateGroupRefreshOnlySections=_configedUpdateGroupRefreshOnlySections;
@property(retain, nonatomic) NSMutableDictionary *guessYouLikeSectionItemDict; // @synthesize guessYouLikeSectionItemDict=_guessYouLikeSectionItemDict;
@property(retain, nonatomic) NSMutableDictionary *guessYouLikeSectionsDict; // @synthesize guessYouLikeSectionsDict=_guessYouLikeSectionsDict;
@property(retain, nonatomic) NSMutableDictionary *mainSectionItemDict; // @synthesize mainSectionItemDict=_mainSectionItemDict;
@property(retain, nonatomic) NSMutableDictionary *mainSectionsDict; // @synthesize mainSectionsDict=_mainSectionsDict;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateGroupRefreshOnlySections; // @synthesize updateGroupRefreshOnlySections=_updateGroupRefreshOnlySections;
- (_Bool)isConfigedUpdateGroupRefreshOnlySection:(id)arg1;
- (void)fetchConfigedUpdateGroupRefreshOnlySectionFromOrange;
- (void)prepareMainSectionItemsWithContainerId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

