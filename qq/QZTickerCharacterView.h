//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface QZTickerCharacterView : UIView
{
    _Bool _shouldFade;
    float _changeTextAnimationDuration;
    float _characterWidth;
    NSArray *_charactersArray;
    UILabel *_textLabel;
    UILabel *_oriTextLabel;
}

@property(nonatomic) float characterWidth; // @synthesize characterWidth=_characterWidth;
@property(nonatomic) _Bool shouldFade; // @synthesize shouldFade=_shouldFade;
@property(nonatomic) float changeTextAnimationDuration; // @synthesize changeTextAnimationDuration=_changeTextAnimationDuration;
@property(retain, nonatomic) UILabel *oriTextLabel; // @synthesize oriTextLabel=_oriTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSArray *charactersArray; // @synthesize charactersArray=_charactersArray;

@end

