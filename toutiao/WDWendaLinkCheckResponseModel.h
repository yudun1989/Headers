//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString, WDLinkCheckStructModel;
@protocol Optional;

@interface WDWendaLinkCheckResponseModel : TTResponseModel
{
    NSNumber<Optional> *_err_no;
    NSString<Optional> *_err_tips;
    WDLinkCheckStructModel<Optional> *_link_data;
}

@property(retain, nonatomic) WDLinkCheckStructModel<Optional> *link_data; // @synthesize link_data=_link_data;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber<Optional> *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

