//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionDataSourceDescription, AVAudioSessionPortDescription, AVAudioSessionRouteDescription, NSArray, NSDictionary, NSString;
@protocol SCAudioSessionListener, SCPerforming;

@protocol SCAudioSession <NSObject>
@property(readonly, nonatomic) double IOBufferDuration;
- (void)addListener:(id <SCAudioSessionListener>)arg1;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) unsigned long long categoryOptions;
- (void)checkIsPlayingSoundWithCompletion:(void (^)(_Bool))arg1;
- (void)checkStatusWithCallbackPerformer:(id <SCPerforming>)arg1 callback:(void (^)(_Bool, _Bool, _Bool))arg2;
@property(readonly, nonatomic) AVAudioSessionRouteDescription *currentRoute;
- (NSString *)debugInfoCurrentRoutes;
- (void)debugInfoWithCompletion:(void (^)(NSString *))arg1;
- (void)debugInfoWithUploadInfoCompletion:(void (^)(NSString *, NSDictionary *))arg1;
@property(readonly, nonatomic) _Bool inputAvailable;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *inputDataSource;
@property(readonly, nonatomic) NSArray *inputDataSources;
@property(readonly, nonatomic) float inputGain;
@property(readonly, nonatomic) _Bool inputGainSettable;
@property(readonly, nonatomic) double inputLatency;
@property(readonly, nonatomic) long long inputNumberOfChannels;
- (_Bool)isOtherAudioPlaying;
- (_Bool)isPlayingSound;
@property(readonly, nonatomic) long long maximumInputNumberOfChannels;
@property(readonly, nonatomic) long long maximumOutputNumberOfChannels;
@property(readonly, nonatomic) NSString *mode;
- (_Bool)noSoundCheckAudioSessionIsNil;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *outputDataSource;
@property(readonly, nonatomic) NSArray *outputDataSources;
@property(readonly, nonatomic) double outputLatency;
@property(readonly, nonatomic) long long outputNumberOfChannels;
@property(readonly, nonatomic) float outputVolume;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double preferredIOBufferDuration;
@property(readonly, nonatomic) double preferredSampleRate;
- (unsigned long long)recordPermission;
- (void)removeListener:(id <SCAudioSessionListener>)arg1;
- (void)requestRecordPermission:(void (^)(_Bool))arg1;
- (void)requestRecordPermissionWithLogging:(_Bool)arg1 permissionBlock:(void (^)(_Bool))arg2;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) _Bool secondaryAudioShouldBeSilencedHint;
- (NSString *)selectedDataSourceName;
- (_Bool)setInputDataSource:(AVAudioSessionDataSourceDescription *)arg1 error:(id *)arg2;
- (_Bool)setInputGain:(float)arg1 error:(id *)arg2;
- (void)setIsOverridingMuteSwitch:(_Bool)arg1;
- (_Bool)setOutputDataSource:(AVAudioSessionDataSourceDescription *)arg1 error:(id *)arg2;
- (void)setOutputVolume:(float)arg1;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredInput:(AVAudioSessionPortDescription *)arg1 error:(id *)arg2;
- (_Bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
@property(nonatomic) _Bool volumeHUDEnabled;
- (void)toggleMuteWithCompletion:(void (^)(void))arg1;
- (NSDictionary *)tryUseFrontMicWithErrorCode:(long long)arg1;
- (_Bool)userUsingBluetoothOutput;
- (_Bool)userUsingHeadphones;
@end

