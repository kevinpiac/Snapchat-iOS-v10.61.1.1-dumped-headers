//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCFideliusSnapPhiWrapper : NSObject
{
    NSDictionary *_package;
    NSDictionary *_eventParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventParams; // @synthesize eventParams=_eventParams;
- (id)initWithPackage:(id)arg1 eventParams:(id)arg2;
@property(retain, nonatomic) NSDictionary *package; // @synthesize package=_package;

@end
