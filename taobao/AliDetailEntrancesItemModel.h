//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailEntrancesItemModel : TBJSONModel
{
    NSString *_icon;
    NSString *_text;
    NSString *_link;
    NSString *_linkText;
    NSString *_spm;
    NSString *_scm;
}

@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

