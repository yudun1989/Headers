//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, WDUserStructModel;
@protocol Optional, WDHighlightStructModel><Optional;

@interface WDSearchUserStructModel : WDBaseModel
{
    WDUserStructModel<Optional> *_user;
    NSArray<WDHighlightStructModel><Optional> *_highlight;
}

@property(copy, nonatomic) NSArray<WDHighlightStructModel><Optional> *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) WDUserStructModel<Optional> *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

