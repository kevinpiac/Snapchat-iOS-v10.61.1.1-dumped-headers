//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SCXWeather : NSObject
{
    NSString *_path;
    NSMutableArray *_particleTemplates;
    double _duration;
    NSString *_liveEditHost;
}

+ (id)demoEffectWithName:(id)arg1;
+ (id)effectAtPath:(id)arg1;
+ (id)effectWithJson:(id)arg1 liveEditHost:(id)arg2;
+ (id)emptyFallbackEffect;
- (void).cxx_destruct;
- (_Bool)_decodeJson:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithPath:(id)arg1 liveEditHost:(id)arg2;
@property(copy, nonatomic) NSString *liveEditHost; // @synthesize liveEditHost=_liveEditHost;
- (void)loadImageWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)opaqueIdentifier;
@property(readonly, nonatomic) NSMutableArray *particleTemplates; // @synthesize particleTemplates=_particleTemplates;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;

@end

