//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCognacAppDataModel, UIColor;

@interface SCCognacChatDrawerTileItem : NSObject <NSCopying>
{
    SCCognacAppDataModel *_app;
    long long _state;
    UIColor *_updateIndicatorColor;
    NSString *_appDescription;
    unsigned long long _updateIndicatorType;
    unsigned long long _tileIndex;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCCognacAppDataModel *app; // @synthesize app=_app;
@property(readonly, copy, nonatomic) NSString *appDescription; // @synthesize appDescription=_appDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithApp:(id)arg1 state:(long long)arg2 updateIndicatorColor:(id)arg3 appDescription:(id)arg4 updateIndicatorType:(unsigned long long)arg5 tileIndex:(unsigned long long)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long tileIndex; // @synthesize tileIndex=_tileIndex;
@property(readonly, copy, nonatomic) UIColor *updateIndicatorColor; // @synthesize updateIndicatorColor=_updateIndicatorColor;
@property(readonly, nonatomic) unsigned long long updateIndicatorType; // @synthesize updateIndicatorType=_updateIndicatorType;

@end

