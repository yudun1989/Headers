//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber;
@protocol Optional;

@interface WDWendaPostDislikeResponseModel : TTResponseModel
{
    NSNumber<Optional> *_err_no;
    NSNumber<Optional> *_err_tips;
}

@property(retain, nonatomic) NSNumber<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber<Optional> *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

