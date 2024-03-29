//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ANSFirebaseAnalyticsBridge : NSObject
{
    id _firebaseAnalytics;
    NSArray *_firebaseReservedKeys;
}

+ (id)combinedParametersFromPredefinedParameters:(id)arg1 customParameters:(id)arg2;
+ (id)customParametersFromCustomAttributes:(id)arg1;
+ (id)extractBaseParameterDictionaryFromPredefinedAttributes:(id)arg1 withKeyMapping:(id)arg2;
+ (id)failedEventName:(id)arg1;
+ (id)firebaseEventNameForAnswersEventName:(id)arg1 predefinedAttributes:(id)arg2;
+ (id)firebaseEventParametersForPredefinedAttributes:(id)arg1 customAttributes:(id)arg2 firebaseEventName:(id)arg3;
+ (id)firebaseReservedKeys;
+ (_Bool)isFailableEvent:(id)arg1;
+ (id)predefinedParametersFromPredefinedAttributes:(id)arg1 forFirebaseEventName:(id)arg2;
+ (id)sanitizeAttributeName:(id)arg1;
+ (id)sanitizeEventName:(id)arg1;
+ (id)sanitizeKeyName:(id)arg1;
+ (_Bool)shouldUseFailedEventName:(id)arg1 predefinedAttributes:(id)arg2;
+ (id)transformedBaseParameters:(id)arg1 forFirebaseEventName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id firebaseAnalytics; // @synthesize firebaseAnalytics=_firebaseAnalytics;
@property(retain, nonatomic) NSArray *firebaseReservedKeys; // @synthesize firebaseReservedKeys=_firebaseReservedKeys;
- (id)init;
- (id)initWithFirebaseAnalyticsClass:(Class)arg1;
- (void)logCustomEvent:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logPredefinedEvent:(id)arg1;
- (void)logPredefinedEventToFirebaseWithEventName:(id)arg1 parameters:(id)arg2;

@end

