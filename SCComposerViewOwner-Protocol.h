//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol SCComposerViewOwner <NSObject>

@optional
- (UIView *)composerWillCreateViewForClass:(Class)arg1 nodeId:(NSString *)arg2;
- (void)didAwakeViewFromComposer:(UIView *)arg1;
- (void)didRenderComposerView:(UIView *)arg1;
@end

