//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString, WDUploadImgDataStructModel;
@protocol Optional;

@interface WDWendaUploadImageResponseModel : TTResponseModel
{
    NSString<Optional> *_message;
    WDUploadImgDataStructModel<Optional> *_data;
}

@property(retain, nonatomic) WDUploadImgDataStructModel<Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

