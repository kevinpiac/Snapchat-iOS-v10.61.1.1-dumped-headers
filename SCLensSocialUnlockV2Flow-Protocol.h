//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDeepLinkURL, SCReplyParameters, UIViewController;
@protocol SCLensSocialUnlockV2DeepLinkUnlockPolicy, SCLensSocialUnlockV2FlowDelegate;

@protocol SCLensSocialUnlockV2Flow <NSObject>
- (_Bool)shouldStartUnlockFlowForDeepLinkURL:(SCDeepLinkURL *)arg1 deepLinkUnlockPolicy:(id <SCLensSocialUnlockV2DeepLinkUnlockPolicy>)arg2;
- (_Bool)startUnlockFlowWithDeepLinkURL:(SCDeepLinkURL *)arg1 replyParameters:(SCReplyParameters *)arg2 baseViewController:(UIViewController *)arg3 delegate:(id <SCLensSocialUnlockV2FlowDelegate>)arg4;
@end

