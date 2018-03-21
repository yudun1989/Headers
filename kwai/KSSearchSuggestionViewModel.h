//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSearchPageModel.h"

@class KSContactModel, NSArray, NSString;

@interface KSSearchSuggestionViewModel : KSSearchPageModel
{
    NSString *_ussid;
    NSString *_suggestWordUssid;
    NSArray *_suggestUsers;
    NSArray *_suggestWords;
    KSContactModel *_contactmodel;
}

@property(retain, nonatomic) KSContactModel *contactmodel; // @synthesize contactmodel=_contactmodel;
@property(retain, nonatomic) NSArray *suggestWords; // @synthesize suggestWords=_suggestWords;
@property(retain, nonatomic) NSArray *suggestUsers; // @synthesize suggestUsers=_suggestUsers;
@property(copy, nonatomic) NSString *suggestWordUssid; // @synthesize suggestWordUssid=_suggestWordUssid;
@property(copy, nonatomic) NSString *ussid; // @synthesize ussid=_ussid;
- (void).cxx_destruct;
- (id)safe_suggestItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestItemsCount;
- (unsigned long long)suggestUsersCount;
- (void)setKeyword:(id)arg1;
- (id)initWithContactModel:(id)arg1;

@end

