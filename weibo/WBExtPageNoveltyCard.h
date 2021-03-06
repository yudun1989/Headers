//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBUser;

@interface WBExtPageNoveltyCard : WBPageCard
{
    NSString *_oid;
    NSString *_title;
    NSString *_summary;
    NSString *_url;
    NSString *_update_info;
    NSString *_ext_info;
    long long _showType;
    long long _updated;
    long long _read_count;
    NSString *_mpicon;
    WBUser *_user;
    NSString *_updated_text;
}

@property(retain, nonatomic) NSString *updated_text; // @synthesize updated_text=_updated_text;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *mpicon; // @synthesize mpicon=_mpicon;
@property(nonatomic) long long read_count; // @synthesize read_count=_read_count;
@property(nonatomic) long long updated; // @synthesize updated=_updated;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *ext_info; // @synthesize ext_info=_ext_info;
@property(copy, nonatomic) NSString *update_info; // @synthesize update_info=_update_info;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

