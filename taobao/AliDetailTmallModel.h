//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailTmallModel : TBJSONModel
{
    NSString *_title;
    NSString *_text;
    NSString *_link;
    NSString *_icon;
    NSString *_item_id;
    NSString *_seller_id;
    NSString *_spm;
}

@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(copy, nonatomic) NSString *seller_id; // @synthesize seller_id=_seller_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

