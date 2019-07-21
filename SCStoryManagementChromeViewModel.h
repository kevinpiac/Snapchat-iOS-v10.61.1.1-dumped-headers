//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCAvatarViewModel;

@interface SCStoryManagementChromeViewModel : NSObject <NSCopying>
{
    NSString *_titleLabelText;
    NSDate *_timestamp;
    long long _chromeViewType;
    SCAvatarViewModel *_avatarViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, nonatomic) long long chromeViewType; // @synthesize chromeViewType=_chromeViewType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitleLabelText:(id)arg1 timestamp:(id)arg2 chromeViewType:(long long)arg3 avatarViewModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;

@end

