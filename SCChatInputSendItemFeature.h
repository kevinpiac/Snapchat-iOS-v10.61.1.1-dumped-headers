//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatInputFeatureRepresentable-Protocol.h"

@class SCChatInputFeatureType, SCChatInputItem;

@interface SCChatInputSendItemFeature : NSObject <SCChatInputFeatureRepresentable>
{
    SCChatInputFeatureType *_featureType;
    SCChatInputItem *_inputItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCChatInputFeatureType *featureType; // @synthesize featureType=_featureType;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic) SCChatInputItem *inputItem; // @synthesize inputItem=_inputItem;

@end

