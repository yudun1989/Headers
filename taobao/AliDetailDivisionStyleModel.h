//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailDivisionStyleModel : TBJSONModel
{
    float _height;
    NSString *_type;
    NSString *_topLine;
    NSString *_bottomLine;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_bgcolor;
    NSString *_fgcolor;
    NSString *_linecolor;
}

+ (id)createBlankWithHeight:(double)arg1;
@property(retain, nonatomic) NSString *linecolor; // @synthesize linecolor=_linecolor;
@property(retain, nonatomic) NSString *fgcolor; // @synthesize fgcolor=_fgcolor;
@property(retain, nonatomic) NSString *bgcolor; // @synthesize bgcolor=_bgcolor;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) NSString *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) float height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

