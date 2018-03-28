//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol Optional, Optional><NSString;

@interface TTAdCanvasLayoutDataModel : JSONModel
{
    NSString<Optional> *_text;
    NSString<Optional> *_imgsrc;
    NSString<Optional> *_url;
    NSString<Optional> *_coverUrl;
    NSString<Optional> *_coverTag;
    NSString<Optional> *_videoId;
    NSArray<Optional><NSString> *_imgs;
    NSString<Optional> *_liveId;
    NSString<Optional> *_androidLink;
    NSString<Optional> *_iosLink;
    NSString<Optional> *_apple_id;
    NSString<Optional> *_open_url;
    NSString<Optional> *_ipa_url;
    NSString<Optional> *_telnum;
    NSString<Optional> *_portraitMode;
}

@property(retain, nonatomic) NSString<Optional> *portraitMode; // @synthesize portraitMode=_portraitMode;
@property(retain, nonatomic) NSString<Optional> *telnum; // @synthesize telnum=_telnum;
@property(retain, nonatomic) NSString<Optional> *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
@property(retain, nonatomic) NSString<Optional> *apple_id; // @synthesize apple_id=_apple_id;
@property(retain, nonatomic) NSString<Optional> *iosLink; // @synthesize iosLink=_iosLink;
@property(retain, nonatomic) NSString<Optional> *androidLink; // @synthesize androidLink=_androidLink;
@property(retain, nonatomic) NSString<Optional> *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSArray<Optional><NSString> *imgs; // @synthesize imgs=_imgs;
@property(retain, nonatomic) NSString<Optional> *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString<Optional> *coverTag; // @synthesize coverTag=_coverTag;
@property(retain, nonatomic) NSString<Optional> *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString<Optional> *imgsrc; // @synthesize imgsrc=_imgsrc;
@property(retain, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isFullScreen;

@end

