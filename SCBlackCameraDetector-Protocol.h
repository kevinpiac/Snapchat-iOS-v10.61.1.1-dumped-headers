//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol SCManiphestTicketCreator;

@protocol SCBlackCameraDetector <NSObject>
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (id)initWithTicketCreator:(id <SCManiphestTicketCreator>)arg1;
- (void)onCameraViewVisible:(_Bool)arg1;
- (void)onCameraViewVisibleWithTouch:(UIGestureRecognizer *)arg1;
- (void)sessionDidCallStartRunning;
- (void)sessionDidCallStopRunning;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)sessionDidCommitConfiguration;
- (void)sessionDidRecreate;
- (void)sessionRuntimeError;
- (void)sessionWillCallStartRunning;
- (void)sessionWillCallStopRunning;
- (void)sessionWillCommitConfiguration;
- (void)sessionWillRecreate;
@end

