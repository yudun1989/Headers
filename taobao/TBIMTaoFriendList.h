//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBIMTaoFriendList : NSObject
{
    _Bool _needSectionHeaderView;
    _Bool _canReName;
    NSString *_sectionHeaderViewTitle;
    NSMutableArray *_list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *sectionHeaderViewTitle; // @synthesize sectionHeaderViewTitle=_sectionHeaderViewTitle;
@property(nonatomic) _Bool canReName; // @synthesize canReName=_canReName;
@property(nonatomic) _Bool needSectionHeaderView; // @synthesize needSectionHeaderView=_needSectionHeaderView;
- (void).cxx_destruct;

@end

