//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol SCTCognacSession <NSObject>
- (void)activate;
- (void)background;
- (void)deactivate;
- (NSDictionary *)participants;
- (void)requestPublishingAudio:(_Bool)arg1;
- (void)requestSoftMute:(_Bool)arg1;
- (void)sendMessage:(NSData *)arg1;
- (void)setKeyboardUp:(_Bool)arg1;
@end

