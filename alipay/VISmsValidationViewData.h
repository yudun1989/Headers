//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface VISmsValidationViewData : NSObject
{
    NSAttributedString *_highlightTip;
    NSString *_phoneNumber;
}

@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSAttributedString *highlightTip; // @synthesize highlightTip=_highlightTip;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)arg1 tip:(id)arg2 highlightWords:(id)arg3;

@end

