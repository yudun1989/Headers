//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TBSVideoPlayEndViewDelegate;

@interface TBSVideoPlayEndView : UIView
{
    id <TBSVideoPlayEndViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBSVideoPlayEndViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 andBounds:(struct CGRect)arg2;

@end

