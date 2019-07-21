//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class SCCognacInitializeRequestBody, SCCognacOperaDataSource, SCOperaViewController;

@interface SCCognacInitializeRequestOperation : SCCognacWVJBRequestOperation
{
    SCCognacInitializeRequestBody *_requestBody;
    SCCognacOperaDataSource *_dataSource;
    double _bottomSafeAreaHeight;
    double _volume;
    SCOperaViewController *_operaVC;
}

- (void).cxx_destruct;
- (void)_callbackForUnsupportedOperation;
- (_Bool)_clientVersionSupported;
- (void)_handleClientVersionUnsupported;
- (_Bool)_validateState;
@property(nonatomic) double bottomSafeAreaHeight; // @synthesize bottomSafeAreaHeight=_bottomSafeAreaHeight;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void)run;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void)teardown;

@end

