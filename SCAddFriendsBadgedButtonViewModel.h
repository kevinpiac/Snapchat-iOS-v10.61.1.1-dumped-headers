//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSValue;

@interface SCAddFriendsBadgedButtonViewModel : NSObject <NSCopying>
{
    NSValue *_preferredSize;
    NSString *_imageName;
    NSString *_alternativeImageName;
    unsigned long long _badgeNumber;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *alternativeImageName; // @synthesize alternativeImageName=_alternativeImageName;
@property(readonly, nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithPreferredSize:(id)arg1 imageName:(id)arg2 alternativeImageName:(id)arg3 badgeNumber:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSValue *preferredSize; // @synthesize preferredSize=_preferredSize;

@end

