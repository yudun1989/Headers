//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class DIVADisplayLargePicView, NSString;

@interface AliDetailDIVAPicComponent : WXComponent
{
    DIVADisplayLargePicView *_picView;
    NSString *_picUrl;
}

@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) DIVADisplayLargePicView *picView; // @synthesize picView=_picView;
- (void).cxx_destruct;
- (void)cleanDIVAPic;
- (void)loadDivaPicView;
- (void)dealloc;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (id)loadView;

@end

