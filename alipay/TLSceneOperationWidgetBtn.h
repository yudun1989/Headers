//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface TLSceneOperationWidgetBtn : UIButton
{
    _Bool _isOpen;
    long long _operationType;
    UIImageView *_operationImgView;
}

+ (id)operationBtnIcon:(long long)arg1;
+ (double)operationWidgetBtnHeight;
+ (id)operationWidgetButtonWithType:(long long)arg1 widgetSize:(struct CGSize)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)operationWidgetButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) UIImageView *operationImgView; // @synthesize operationImgView=_operationImgView;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
- (void).cxx_destruct;
- (void)setBtnImageName:(id)arg1;
- (void)buildBackgroundView:(id)arg1;

@end
