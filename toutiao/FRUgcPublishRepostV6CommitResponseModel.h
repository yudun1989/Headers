//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRUgcDataStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRUgcPublishRepostV6CommitResponseModel : TTResponseModel
{
    NSString<Optional> *_err_tips;
    NSNumber *_err_no;
    FRUgcDataStructModel<Optional> *_thread;
}

@property(retain, nonatomic) FRUgcDataStructModel<Optional> *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

