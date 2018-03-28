//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, TTAUrlStructModel><Optional;

@interface TTAuthorBadgeStructModel : JSONModel
{
    NSString<Optional> *_open_url;
    NSString<Optional> *_url;
    NSString<Optional> *_uri;
    NSNumber<Optional> *_width;
    NSNumber<Optional> *_height;
    NSArray<TTAUrlStructModel><Optional> *_url_list;
}

@property(retain, nonatomic) NSArray<TTAUrlStructModel><Optional> *url_list; // @synthesize url_list=_url_list;
@property(retain, nonatomic) NSNumber<Optional> *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber<Optional> *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString<Optional> *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

