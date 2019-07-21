//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCLens, SCLensSbSnappableMessage, SCReplyParameters, SCSnappablesDismissalCoordinator, UIViewController;

@protocol SCSnappablesPresenting <NSObject>
@property(readonly, nonatomic) SCSnappablesDismissalCoordinator *dismissalCoordinator;
- (void)presentSnappablesWithLens:(SCLens *)arg1 payload:(SCLensSbSnappableMessage *)arg2 origin:(unsigned long long)arg3 replyParameters:(SCReplyParameters *)arg4 fromViewController:(UIViewController *)arg5;
- (void)presentSnappablesWithLensID:(NSString *)arg1 payload:(SCLensSbSnappableMessage *)arg2 origin:(unsigned long long)arg3 replyParameters:(SCReplyParameters *)arg4 fromViewController:(UIViewController *)arg5;
@end

