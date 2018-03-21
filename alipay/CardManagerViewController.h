//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class APBMonitor, BisClientConfigContent, Camera, ImageUploader, NSDictionary, NSMutableDictionary, NSNumber, UIController, UIViewController;
@protocol CardManagerResultDelegate;

@interface CardManagerViewController : DTViewController
{
    _Bool _hasNext;
    BisClientConfigContent *_protocol;
    NSDictionary *_bizInfo;
    APBMonitor *_monitor;
    UIViewController *_rootVC;
    id <CardManagerResultDelegate> _delegate;
    NSDictionary *_paramDic;
    UIController *_uiController;
    Camera *_camera;
    ImageUploader *_imgUploader;
    NSDictionary *_currentDic;
    NSMutableDictionary *_rstDictionary;
    NSNumber *_mode;
    NSNumber *_pageNum;
}

@property(retain, nonatomic) NSNumber *pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSNumber *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSMutableDictionary *rstDictionary; // @synthesize rstDictionary=_rstDictionary;
@property(retain, nonatomic) NSDictionary *currentDic; // @synthesize currentDic=_currentDic;
@property(retain, nonatomic) ImageUploader *imgUploader; // @synthesize imgUploader=_imgUploader;
@property(retain, nonatomic) Camera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) UIController *uiController; // @synthesize uiController=_uiController;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) __weak id <CardManagerResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) APBMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSDictionary *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) BisClientConfigContent *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (void)quit;
- (void)setUpConnector;
- (_Bool)checkServerParam;
- (_Bool)checkCamera;
- (void)setUpCamera;
- (id)scaleImage:(id)arg1 toScale:(float)arg2;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)initCardManager;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

