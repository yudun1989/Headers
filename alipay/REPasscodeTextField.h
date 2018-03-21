//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIImage;

@interface REPasscodeTextField : UITextField
{
    UIImage *_normalStateImage;
    UIImage *_highLightStateImage;
}

@property(retain, nonatomic) UIImage *highLightStateImage; // @synthesize highLightStateImage=_highLightStateImage;
@property(retain, nonatomic) UIImage *normalStateImage; // @synthesize normalStateImage=_normalStateImage;
- (void).cxx_destruct;
- (void)enterNormal;
- (void)enterHightlight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

