//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacDataStorageUpdateResult-Protocol.h"

@class NSString, SCCognacAppInstanceDataModel;

@interface SCCognacDataStorageUpdateResultAppInstance : NSObject <SCCognacDataStorageUpdateResult>
{
    SCCognacAppInstanceDataModel *_appInstanceDataModel;
}

+ (id)buildWithAppInstanceDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithAppInstanceDataModel:(id)arg1;
@property(readonly, copy, nonatomic) SCCognacAppInstanceDataModel *appInstanceDataModel; // @synthesize appInstanceDataModel=_appInstanceDataModel;
@property(readonly, copy) NSString *description;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

