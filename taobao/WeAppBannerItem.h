//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentItem.h"

@class NSDictionary, NSString;

@interface WeAppBannerItem : WeAppComponentItem
{
    _Bool _full_image;
    NSString *_data_type;
    NSString *_title;
    NSString *_url;
    NSString *_pic_url;
    NSString *_pic_url_2x;
    NSDictionary *_extra_data;
    NSString *_picture;
    NSString *_picUrl;
    NSString *_redirectUrl;
    unsigned long long _hour;
}

@property(nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSDictionary *extra_data; // @synthesize extra_data=_extra_data;
@property(retain, nonatomic) NSString *pic_url_2x; // @synthesize pic_url_2x=_pic_url_2x;
@property(retain, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(nonatomic) _Bool full_image; // @synthesize full_image=_full_image;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *data_type; // @synthesize data_type=_data_type;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (void)setBannerItem:(id)arg1;

@end

