//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNPackageAppointmentItem : TBJSONModel
{
    _Bool _canAppointment;
    NSString *_appointmentButtonTitle;
    NSString *_appointmentUrl;
    NSString *_appointmentTitle;
    NSString *_appointmentLeftIconUrl;
}

@property(retain, nonatomic) NSString *appointmentLeftIconUrl; // @synthesize appointmentLeftIconUrl=_appointmentLeftIconUrl;
@property(retain, nonatomic) NSString *appointmentTitle; // @synthesize appointmentTitle=_appointmentTitle;
@property(retain, nonatomic) NSString *appointmentUrl; // @synthesize appointmentUrl=_appointmentUrl;
@property(retain, nonatomic) NSString *appointmentButtonTitle; // @synthesize appointmentButtonTitle=_appointmentButtonTitle;
@property(nonatomic) _Bool canAppointment; // @synthesize canAppointment=_canAppointment;
- (void).cxx_destruct;

@end

