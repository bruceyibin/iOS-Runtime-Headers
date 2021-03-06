/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObjectType : NSObject <NSCopying, NSSecureCoding> {
    int _code;
    Class _dataObjectClass;
    NSString *_identifier;
}

@property (nonatomic, readonly) int code;
@property (nonatomic, readonly) Class dataObjectClass;
@property (readonly) NSString *identifier;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_allDataTypeIdentifiers;
+ (BOOL)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (BOOL)_allowAuthorizationForSharing:(BOOL)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (BOOL)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (void)_insertCode:(int)arg1 forIdentifier:(id)arg2;
+ (id)activityCacheType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(int)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)sedentaryMissedHourDataType;
+ (BOOL)supportsSecureCoding;
+ (id)workoutType;

- (void).cxx_destruct;
- (BOOL)_allowAuthorizationForReadingWithEntitlements:(id)arg1;
- (BOOL)_allowAuthorizationForSharingWithEntitlements:(id)arg1;
- (id)_initWithDefinition:(struct { int x1; char *x2; char *x3; int x4; char *x5; char *x6; }*)arg1;
- (BOOL)_requiresAuthorization;
- (id)_safeDescription;
- (int)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataObjectClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI

- (id)hk_categoryID;
- (id)hk_localizedName;

@end
