//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCTV3AudioServices <NSObject>
- (id)lockRingingWithLabel:(NSString *)arg1;
- (void)playSound:(unsigned long long)arg1;
- (_Bool)shouldIgnoreVolumeChanges;
- (void)startRingingInConvoId:(NSString *)arg1 incoming:(_Bool)arg2;
- (void)stopRingingInConvoId:(NSString *)arg1;
- (void)unlockRingingWithToken:(id)arg1;
- (void)updateAudioSessionConfiguration:(unsigned long long)arg1 proximitySensor:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

